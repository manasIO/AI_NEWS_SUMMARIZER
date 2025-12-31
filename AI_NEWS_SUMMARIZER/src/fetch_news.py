import requests
from bs4 import BeautifulSoup

def fetch_article(url: str) -> str:
    response = requests.get(url)
    soup = BeautifulSoup(response.text, "html.parser")

    paragraphs = soup.findAll("p")
    text = " ".join(p.get_text() for p in paragraphs)
    
    return text