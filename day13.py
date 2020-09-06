class MyBook():
    def __init__(self, title, author, price):
        self.title=title
        self.author=author
        self.price=price
    def display(self):
        print(f'Title: {self.title}\n Author: {self.author}\n Price: {self.price}')
#Write MyBook class

title=input()
author=input()
price=int(input())
new_novel=MyBook(title,author,price)
new_novel.display()