class currentaccount:
    def __init__(self,customer_name):
        self.name = customer_name
    def get_customer_name(self):
        return self.name

account_holder = currentaccount("Jogani Tushal")
print "My name is",account_holder.get_customer_name()
