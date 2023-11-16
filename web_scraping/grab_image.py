import requests
import bs4

web_page = requests.get("https://en.wikipedia.org/wiki/Deep_Blue_(chess_computer)")

soup = bs4.BeautifulSoup(web_page.text, "lxml")

image_soup = soup.select(".mw-file-description > img")[0]
image_src = "https:" + image_soup["src"]

print(image_src)

image_link = requests.get(image_src)

f = open("deep_blue_computer_image.jpg", "wb")

# writing the binary code on the image in the file
f.write(image_link.content)
f.close()
