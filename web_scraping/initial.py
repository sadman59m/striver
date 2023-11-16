import requests
import bs4

result = requests.get("https://en.wikipedia.org/wiki/Jonas_Salk")

soup = bs4.BeautifulSoup(result.text, "lxml")

# print(soup)

title = soup.select("title")[0].getText()

print(title)
