// Created by tde-sous on 15-03-2024.

#include "Serializer.hpp"
#include <iostream>

int main() {
  Data GameSerializer = {10, 100, 42, false, false};
  std::cout << "Before serialize()" << std::endl
            << "Level: " << GameSerializer.level
            << " Health: " << GameSerializer.health
            << " Points: " << GameSerializer.points
            << " GameCompleted?: " << GameSerializer.GameComplete
            << " BossDefeated?: " << GameSerializer.BossDefeated << std::endl;

  uintptr_t converted = Serializer::serialize(&GameSerializer);
  std::cout << "After serialize()" << std::endl
            << "Level: " << *reinterpret_cast<int *>(converted)
            << " Health: " << *reinterpret_cast<int *>(converted + sizeof(int))
            << " Points: "
            << *reinterpret_cast<int *>(converted + 2 * sizeof(int))
            << " GameCompleted?: "
            << *reinterpret_cast<bool *>(converted + 3 * sizeof(int))
            << " BossDefeated?: "
            << *reinterpret_cast<bool *>(converted + 3 * sizeof(int) +
                                         sizeof(bool))
            << std::endl;

  Data *reconverted = Serializer::deserialize(converted);
  std::cout << "After deserialize()" << std::endl
            << "Level: " << reconverted->level
            << " Health: " << reconverted->health
            << " Points: " << reconverted->points
            << " GameCompleted?: " << reconverted->GameComplete
            << " BossDefeated?: " << reconverted->BossDefeated << std::endl;
}