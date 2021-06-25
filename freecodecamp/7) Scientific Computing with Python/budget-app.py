class ledgerObject:
  def __init__(self, amount, description):
    amount = self.amount
    description = self.description


class Category:
  def __init__(self, name):
    name = self.name
    balance = 0
    ledger = []

  #getter
  def get_balance(self):
    return self.balance

  def get_ledger(self):
    return self.ledger

  def get_name(self):
    return self.name

  #setter
  def set_balance(self, amount):
    self.balance = amount

  def append_ledger(self, thing):
    self.ledger.append(thing)

  #method
  def check_funds(self, amount):
    if amount > self.get_balance():
      return False
    return True

  def deposit(self, amount, description=""):
    self.append_ledger(ledgerObject(amount, description))
    self.set_balance(self.get_balance() + amount)

  def withdraw(self, amount, description=""):
    if not self.check_funds(amount):
      return False
    self.append_ledger(ledgerObject(amount, description))
    self.set_balance(self.get_balance() + amount)
    return True

  def transfer(self, amount, category):
    if not self.check_funds(amount):
      return False


def create_spend_chart(categories):
  pass
