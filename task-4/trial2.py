import json
import requests

my_key = 'kxkRlIkL1MRRBAje7yHo4B1RhoHmk9zRO7aW7p26'
nasa_url = 'https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date=2015-6-3&api_key=' + my_key
requests.get(nasa_url).json()
