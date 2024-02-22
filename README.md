# Projet son

## Description 

Ce projet consiste en l'implémentation d'un vocodeur utilisant le langage de programmation Faust. Le vocodeur prend en entrée un signal provenant du microphone ainsi qu'un signal d'excitation préalablement défini, ici du bruit blanc. 

## Fonctionnalités 

- Vocodeur à Bruit Blanc : Le vocodeur est conçu pour fonctionner avec un signal d'excitation à bruit blanc.
- Filtres Passe-bande : Le signal est divisé en plusieurs bandes par des filtres passe-bande, permettant des modifications spécifiques pour chaque bande fréquentielle, centrées sur la fréquence de la voix humaine.
- Contrôle de Paramètres : L'intégration avec Arduino et Teensy permet le contrôle en temps réel du volume, de l'attaque et du relâchement via des potentiomètres.
