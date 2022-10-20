!pip install chatterbot
!pip install chatterbot_corpus

import chatterbot
import chatterbot_corpus

from chatterbot.trainers import ListTrainer
from chatterbot import ChatBot
from chatterbot.trainers import ChatterBotCorpusTrainer
import chatterbot_corpus
from chatterbot.logic import LogicAdapter

chatvbot = ChatBot("Donna",logic_adapters=[
        "chatterbot.logic.BestMatch",
#        {'import_path': 'Chatbot.MyLogicAdapter'}
    ])

conversation = [
    "Hello",
    "Hi there!",
    "How are you doing?",
    "I'm doing great.",
    "That is good to hear",
    "Thank you.",
    "You're welcome.",
    "We provide services in Web development, eCommerce and CRM",
    "Want are you looking for?"
]

#trainer = ListTrainer(chatbot)

#trainer.train(conversation)

from chatterbot.trainers import ChatterBotCorpusTrainer
corpus_trainer = ChatterBotCorpusTrainer(chatvbot)
corpus_trainer.train('chatterbot.corpus.english')
class MyLogicAdapter(LogicAdapter):
    def __init__(self, chatbot, **kwargs):
        super().__init__(chatbot, **kwargs)

    def can_process(self, statement):
        return True

    def process(self, input_statement, additional_response_selection_parameters):
        import random

        # Randomly select a confidence between 0 and 1
        confidence = random.uniform(0, 1)

        # For this example, we will just return the input as output
        selected_statement = input_statement
        selected_statement.confidence = confidence

        return selected_statement








response = chatbot.get_response("Good morning!")
print("Good morning!")
print(response)

response = chatbot.get_response("What services do you provide?")
print("What services do you provide?")
print(response)


print("Enter bye to quit chatting!")
query = input()

while(query not in ["Bye","bye"]):
  response = chatbot.get_response(query)
  print("Donna", response)
  query = input()
