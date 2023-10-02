#!/bin/bash

# Cloner le dépôt GitHub
git clone git@github.com:rtipe/GameEngine.git
cd GameEngine
git checkout GameEngineV1

# Demander le nom du projet à l'utilisateur
echo "Quel nom de projet voulez-vous ?"
read project_name

# Demander le titre de la fenêtre à l'utilisateur
echo "Quel est le titre de la fenêtre ?"
read window_title

# Demander la largeur de la fenêtre à l'utilisateur (avec vérification)
while true; do
    echo "Quelle largeur pour la fenêtre ? (entrez un chiffre)"
    read window_width
    if [[ $window_width =~ ^[0-9]+$ ]]; then
        break
    else
        echo "Veuillez entrer une valeur numérique valide."
    fi
done

# Demander la hauteur de la fenêtre à l'utilisateur (avec vérification)
while true; do
    echo "Quelle hauteur pour la fenêtre ? (entrez un chiffre)"
    read window_height
    if [[ $window_height =~ ^[0-9]+$ ]]; then
        break
    else
        echo "Veuillez entrer une valeur numérique valide."
    fi
done

# Demander le FPS à l'utilisateur
echo "Quel FPS voulez-vous ?"
read fps

# Mettre à jour le fichier test.json avec les réponses de l'utilisateur
cat <<EOL > "Json/projectInfos.json"
{
    "name": "$project_name",
    "directoryScenePath": "../Json/Scenes/",
    "startScene": "test.json",
    "globalScene": "global.json",
    "windowInfos": {
        "title": "$window_title",
        "width": $window_width,
        "height": $window_height,
        "fps": $fps
    }
}
EOL

# Afficher un message de confirmation
echo "Le fichier test.json a été mis à jour avec les informations fournies."

# Vous pouvez ajouter d'autres étapes de configuration du projet ici
