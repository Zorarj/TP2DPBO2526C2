class person:
    def __init__(self,name,address,age):
        self.__name = name
        self.__address = address
        self.__age = age
        
    #getter setter
    def set_name(self,name):
        self.__name = name    
    def get_name(self):
        return self.__name
    
    def set_address(self,address):
        self.__address = address    
    def get_address(self):
        return self.__address
    
    def set_age(self,age):
        self.__age = age    
    def get_age(self):
        return self.__age
    