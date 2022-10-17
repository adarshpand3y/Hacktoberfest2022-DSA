class KnapsackPackage(object):
     """ Knapsack Package Data Class """
     def __init__(self, weight, value):
         self.weight = weight
         self.value = value
         self.cost = value / weight
     def __lt__(self, other):
         return self.cost < other.cost
 if __name__ == "__main__":
     W = [15, 10, 2, 4]
     V = [30, 25, 2, 6]
     M = 37
     n = 4
     proc = FractionalKnapsack()
     proc.knapsackGreProc(W, V, M, n)
 class FractionalKnapsack(object):
     def __init__(self):
     def knapsackGreProc(self, W, V, M, n):
         packs = []
         for i in range(n):
             packs.append(KnapsackPackage(W[i], V[i]))
         packs.sort(reverse = True)
         remain = M
         result = 0
         i = 0
         stopProc = False
   while (stopProc != True):
             if (packs[i].weight <= remain):
                 remain -= packs[i].weight;
                 result += packs[i].value;
   print("Pack ", i, " - Weight ", packs[i].weight, " - Value ", packs[i].value)
             if (packs[i].weight > remain):
                 i += 1
             if (i == n):
                 stopProc = True
  print("Max Value:t", result)
