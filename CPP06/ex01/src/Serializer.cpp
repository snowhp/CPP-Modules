// Created by tde-sous on 15-03-2024.
#include "../inc/Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &other) { *this = other; }

Serializer &Serializer::operator=(const Serializer &other) {
  if (this == &other)
    return *this;
  return *this;
}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data *ptr) {
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw) {
  return (reinterpret_cast<Data *>(raw));
}
