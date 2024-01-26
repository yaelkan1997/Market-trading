# Farm Market Simulation

Welcome to the Farm Market Simulation! This console-based simulation allows you to experience the dynamics of managing different types of farms, buying and selling animals, and navigating the challenges of the agricultural market.

## Introduction

This project is a C++ simulation of a farm market where you can run a farm, buy and sell animals, and manage your finances. Different types of farms, including chicken farms, cow farms, and sheep farms, offer unique products and interactions with each other. The simulation progresses annually, allowing you to make strategic decisions to optimize your farm's success.

## File Structure

1. **Animal.h & Animal.cpp**
   - Base class for animals with common attributes.
   - Derived classes: Chicken, Cow.

2. **Chicken.h & Chicken.cpp**
   - Represents a chicken, inheriting from the Animal class.

3. **Cow.h & Cow.cpp**
   - Represents a cow, inheriting from the Animal class.

4. **Exception.h**
   - Custom exception classes for handling valid numbers of farms.

5. **Farm.h & Farm.cpp**
   - Base class for different farm types.
   - Derived classes: chickenFarm, cowFarm, sheepFarm.

6. **chickenFarm.h & chickenFarm.cpp**
   - Represents a chicken farm, specializing in chicken-related products.

7. **cowFarm.h & cowFarm.cpp**
   - Represents a cow farm, specializing in cow-related products.

8. **sheepFarm.h & sheepFarm.cpp**
   - Represents a sheep farm, specializing in sheep-related products.

9. **Market.h & Market.cpp**
   - Manages the overall market simulation and farm interactions.

10. **farmMarket.cpp**
    - Main program for running the farm market simulation.
