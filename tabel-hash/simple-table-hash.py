class HashMap:
    def __init__(self , size=100) -> None:
        self.size = size
        self.buckets = [ [] for _ in range (size)] #lista com 100 sub lista

    def get_hash(self, key):
        h=0
        for char in key:
            h += ord (char) # converte cada caracter para o código númerico da tabela ASCII
        return h % self.size #calcula o hash

    def add(self, key, value):
        index = self.get_hash(key) #onde vou guardar
        bucket = self.buckets[index] #escolhe o bucket correspondente

        for i, (k, v) in enumerate (bucket): #verifica se já existe um chave igual e substitui caso haja
            if k == key:
                bucket[i] = (key, value)
                return

        bucket.append((key, value)) #se não encontrar a chave, ele insere em um novo bucket

    def get(self, key):
        index = self.get_hash(key)
        bucket = self.buckets[index] # vai direto para o bucket correspondente

        #percorre a lista encadeada, cada par, e se k for igual a key, devolve o valor de k
        for k, v in bucket:
            if k== key:
                return v

        return None #caso a chave não for encontrada

    def delete(self, key) -> bool:
        index = self.get_hash(key)
        bucket = self.buckets[index] # vai direto para o bucket correspondente

        for i ,(k, v) in enumerate (bucket):
            if k == key: #encontra e remove
                del bucket[i]
                return True
        return False
    