from empty import Empty

class Linkedlist:
    class _node:
        __slots__ = 'element','next'
        def __init__(self,element,next):
            self.element = element
            self.next = next
    
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0
    
    def _len(self):
        return self._size
    def _is_empty(self):
        return self._size == 0
    def add_first(self, e):
        newest = self._node(e, None)
        if self._is_empty():
            self.head = newest
            self.tail = newest
        else:
            newest.next = self.head
        self.head = newest
        self.size += 1
    
    def add_last(self, e):
        newest = self._node(e, None)
        if self._is_empty():
            self.head = newest
            self.tail = newest
        else:
            self.tail.next = newest
        self.tail = newest
        self.size += 1
        
    def add_any(self, e, pos):
        newest = self._node(e, None)
        thead = self._head
        i = 1
        while i<pos:
            thead = thead.next
            i += 1
        newest.next = thead.next
        thead.next = newest
        self.size += 1
