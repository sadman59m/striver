import requests

api_url = "https://api.coingecko.com/api/v3/coins/markets?vs_currency=usd&order=market_cap_desc&per_page=100&page=1&sparkline=false"


try:
    response = requests.get(api_url)

    if response.status_code == 200:
        data = response.json()

        for item in data:
            print(item["id"])

    else:
        print("error fetching data")

except Exception as error:
    print(error)
