from selenium import webdriver

chrome_driver = webdriver.Chrome('./chromedriver.exe')

chrome_driver.get('https://translate.google.cn/')
