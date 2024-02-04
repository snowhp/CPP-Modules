// Created by tde-sous on 21-01-2024.
#include "Brain.hpp"

Brain::Brain() {
  std::cout << "[Brain] Default constructor called.\n";
  RandomIdeas();
}

Brain::Brain(const Brain &other) {
  std::cout << "[Brain] Copy constructor called.\n";
  for (int i = 0; i < IDEAS; i++)
    this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other) {
  std::cout << "[Brain] Copy assigment operator called.\n";
  if (this == &other)
    return *this;
  for (int i = 0; i < IDEAS; i++)
    this->ideas[i] = other.ideas[i];
  return *this;
}

Brain::~Brain() { std::cout << "[Brain] Destructor called.\n"; }

void Brain::RandomIdeas() {
  const std::string random_ideas[] = {
      "Where am I?",
      "Let's play!",
      "I wanna run",
      "I want a friend!",
      "Dreaming of chasing squirrels",
      "Wondering when my human will be back",
      "Planning my next nap",
      "Contemplating the meaning of life (and treats)",
      "Pondering the mysteries of the vacuum cleaner",
      "Plotting to steal a sock",
      "Fantasizing about a world where treats fall from the sky",
      "Calculating the perfect time to wake up my human",
      "Daydreaming about chasing my tail",
      "Considering a career as a professional beggar",
      "Planning a midnight zoomies session",
      "Wondering if I'm a good boy/girl",
      "Fantasizing about the forbidden pleasures of the garbage can",
      "Contemplating the existential crisis of the red dot",
      "Plotting the ultimate escape from the bath"};
  for (int i = 0; i < IDEAS; i++)
    this->ideas[i] = random_ideas[rand() % 6];
}
