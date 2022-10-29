from queue import LifoQueue  # importing the module available in python for lifo queues
s = LifoQueue()
s.put("eat")
s.put("sleep")
s.put("code")

s


s.get()

s.get()

s.get()


s.get_nowait()


s.get()