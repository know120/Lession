
class Category:

    def __init__(self, name):
        self.name = name
        self.ledger = []
        self.total_withdrawn = float()

    def __str__(self):
        stars = (30 - len(self.name))//2
        repr = ''.rjust(stars, '*') + self.name + \
            ''.ljust(30 - stars - len(self.name), '*')
        trans = ''
        for ledge in self.ledger:
            # checks if description contains more than 23 charecters or not
            if len(ledge['description']) > 23:
                description = ledge['description'][:23]
                new = description.ljust(
                    23) + str('%.2f' % ledge['amount']).rjust(7) + '\n'
            else:
                new = ledge['description'].ljust(
                    23) + str('%.2f' % ledge['amount']).rjust(7) + '\n'
            trans += new

        ret = repr + '\n' + trans + 'Total: ' + str(self.get_balance())
        #  print budget descriptions
        return ret

    # deposit to ledger
    def deposit(self, amount, description=''):
        # adding to ledger
        self.ledger.append(
            {'amount': amount, 'description': description}
        )

    # current balance check
    def get_balance(self):
        funds = sum(
            [amount['amount'] for amount in self.ledger]
        )
        return funds

    # check amount available or not
    def check_funds(self, amount):
        # check fund available or not
        if self.get_balance() >= amount:
            return True
        # fund not available
        return False

    # withraw amount
    def withdraw(self, amount, description=''):
        # calculate total available funds
        funds = self.get_balance()
        # check fund is available or not
        if amount > funds:
            return False
        # adding to ledger
        self.ledger.append({
            'amount': -amount,
            'description': description
        })
        self.total_withdrawn += abs(amount)
        # added to ledger successfully
        return True

    def transfer(self, amount, category):
        # check fund is available or not
        if self.check_funds(amount):
            # withdraw amount from current category
            self.withdraw(
                amount, 'Transfer to ' + category.name
            )
            # deposit amount to other category
            category.deposit(
                amount, 'Transfer from ' + self.name
            )
            # transfer successfully
            return True
        # fund not available
        return False


def create_spend_chart(categories):
    # create a list of categories and their balances
    max_cat = max([len(cat.name) for cat in categories])
    header = 'Percentage spent by category'

    total_spends = 0
    perc_dict = {
        item: str(item).rjust(3)+'| ' for item in range(100, -1, -10)
    }
    cat_dict = {
        item: ''.rjust(5) for item in range(0, max_cat)
    }

    # calculate total spends
    for category in categories:
        total_spends += category.total_withdrawn

    # calculate percentage of each category
    for category in categories:
        cat_list = list(str(category.name))
        per = (abs(int((category.total_withdrawn/total_spends)*100))//10)*10

        # prepare percentage bar for each category
        for key in perc_dict.keys():
            if key <= per:
                perc_dict[key] += 'o  '
            else:
                perc_dict[key] += '   '

        # prepare category name for each category
        for key in cat_dict.keys():
            if key < len(cat_list):
                cat_dict[key] += cat_list[key] + '  '
            else:
                cat_dict[key] += '   '

    # create header
    for value in perc_dict.values():
        header += '\n' + value

    # create dashes for chart
    header += '\n    ' + str('---'*len(categories)) + '-'

    # create category names
    for value in cat_dict.values():
        header += '\n' + value

    # return percentage bar string
    return header
