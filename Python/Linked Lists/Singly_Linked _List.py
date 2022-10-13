class Node(object):
	def __init__(self, data):
		self.data = data
		self.next = None

# Class to create a Linked List
class LinkedList(object):
	def __init__(self, head=None):
		self.head = head

	# Search an element and print its index
	def search(self, head, data, index):
		if head.data == data:
			print (index)
		else:
			# Make recursive calls
			if head.next:
				return self.search(head.next, data, index+1)
			else:
				raise ValueError("Node not in linked list")

	# Print the linked list
	def print_list(self):
		if self.head == None:
			raise ValueError("List is empty")

		current = self.head 
		while(current):
			print (current.data, end="  ")
			current = current.next
		print ('\n')

	# Find length of Linked List
	def size(self):
		if self.head == None:
			return 0

		size = 0
		current = self.head
		while(current):
			size += 1
			current = current.next

		return size

	# Insert a node in a linked list
	def insert(self, data):
		node = Node(data)
		if not self.head:
			self.head = node
		else:
			node.next = self.head
			self.head = node

	# Delete a node in a linked list
	def delete(self, data):
		if not self.head:
			return
		
		temp = self.head
		
		# Check if head node is to be deleted
		if head.data == data:
			head = temp.next
			print ("Deleted node is " + str(head.data))
			return

		while(temp.next):
			if (temp.next.data == data):
				print ("Node deleted is " + str(temp.next.data))
				temp.next = temp.next.next
				return
			temp = temp.next
		print ("Node not found")
		return