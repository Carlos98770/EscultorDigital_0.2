# EscultorDigital_0.2

> Versão 0.2 do Escultor Digital

## Ideia geral e objetivos

Nessa versão, é utilizado conceitos de classes abstratas e de herança, para realizar o a leitura de um arquivo com instruções para o desenho na matriz de voxels.

### Documentação

A Documentação do projeto pode ser acessada via link:[Documentação](https://carlos98770.github.io/EscultorDigital_0.2/html/index.html)


```
dim 150 150 150
putbox 0 150 149 150 0 150 0.52 0.80 0.98 1
putbox 0 1 0 150 0 150 0.52 0.80 0.98 1
putbox 40 90 149 150 75 85 1 1 1 1
putbox 50 80 149 150 85 90 1 1 1 1
putbox 60 70 149 150 90 100 1 1 1 1
putbox 1 2 30 80 95 105 1 1 1 1
putbox 1 2 40 70 105 110 1 1 1 1
putbox 1 2 50 60 110 120 1 1 1 1
putbox 1 2 90 140 70 80 1 1 1 1
putbox 1 2 100 130 80 85 1 1 1 1
putbox 1 2 110 120 85 95 1 1 1 1
putbox 0 150 0 150 0 1 0.1961 0.8039 0.1961 1
putbox 25 35 25 60 25 70 0.1176 0.5647 1 1
cutbox 26 34 26 59 26 69
putbox 20 40 25 60 70 100 0.9569 0.6431 0.3765 1
cutbox 21 39 26 59 71 99
putbox 39 40 30 56 70 75 0.5451 0.2706 0.0745 1
putbox 39 40 30 36 75 79 0.5451 0.2706 0.0745 1
putbox 39 40 49 56 75 79 0.5451 0.2706 0.0745 1
putbox 39 40 30 56 74 75 0 0 0 1
putbox 39 40 30 56 70 71 0 0 0 1
putbox 39 40 30 31 70 75 0 0 0 1
putbox 39 40 55 56 70 75 0 0 0 1
putbox 39 40 30 36 74 75 0.5451 0.2706 0.0745 1
putbox 39 40 49 56 74 75 0.5451 0.2706 0.0745 1
putbox 39 40 36 49 78 81 0.62 0.32 0.17 1
putbox 39 40 36 38 78 81 0 0 0 1
putbox 39 40 48 50 78 81 0 0 0 1
putbox 39 40 36 49 78 71 0 0 0 1
putbox 39 40 36 49 81 83 0 0 0 1
putbox 39 40 42 44 78 81 0 0 0 1
putbox 39 40 29 39 82 87 1 1 1 1
putbox 39 40 47 57 82 87 1 1 1 1
putbox 39 40 35 39 82 87 0 0 1 1
putbox 39 40 47 51 82 87 0 0 1 1
putbox 39 40 29 30 82 87 0 0 0 1
putbox 39 40 38 39 82 87 0 0 0 1
putbox 39 40 29 39 82 84 0 0 0 1
putbox 39 40 29 39 86 88 0 0 0 1
putbox 39 40 47 48 82 87 0 0 0 1
putbox 39 40 56 57 82 87 0 0 0 1
putbox 39 40 47 57 82 84 0 0 0 1
putbox 39 40 47 57 86 88 0 0 0 1
putbox 39 40 25 60 90 100 0.6275 0.3216 0.1765 1
putbox 20 40 25 60 98 100 0.6275 0.3216 0.1765 1
putbox 20 21 25 60 70 100 0.6275 0.3216 0.1765 1
putbox 20 40 23 25 70 100 0.6275 0.3216 0.1765 1
putbox 20 40 58 60 70 100 0.6275 0.3216 0.1765 1
putbox 39 40 30 55 90 95 0.9569 0.6431 0.3765 1
putbox 30 40 23 25 70 85 0.9569 0.6431 0.3765 1
putbox 25 30 23 25 70 85 0.9569 0.6431 0.3765 1
putbox 30 40 58 60 70 85 0.9569 0.6431 0.3765 1
putbox 25 30 58 60 70 85 0.9569 0.6431 0.3765 1 
putbox 25 35 47 60 24 25 0.2549 0.4118 0.8824 1
putbox 24 34 47 60 23 24 0.2549 0.4118 0.8824 1
putbox 23 33 47 60 22 23 0.2549 0.4118 0.8824 1
putbox 22 32 47 60 21 22 0.2549 0.4118 0.8824 1
putbox 21 31 47 60 20 21 0.2549 0.4118 0.8824 1
putbox 20 30 47 60 19 20 0.2549 0.4118 0.8824 1
putbox 19 29 47 60 18 19 0.2549 0.4118 0.8824 1
putbox 18 28 47 60 17 18 0.2549 0.4118 0.8824 1
putbox 17 27 47 60 16 17 0.2549 0.4118 0.8824 1
putbox 16 26 47 60 15 16 0.2549 0.4118 0.8824 1
putbox 15 25 47 60 14 15 0.2549 0.4118 0.8824 1
putbox 14 24 47 60 13 14 0.2549 0.4118 0.8824 1
putbox 13 23 47 60 12 13 0.2549 0.4118 0.8824 1
putbox 12 22 47 60 11 12 0.2549 0.4118 0.8824 1
putbox 11 21 47 60 10 11 0.2549 0.4118 0.8824 1
putbox 10 20 47 60 9 10 0.2549 0.4118 0.8824 1
putbox 9 19 47 60 8 9 0.2549 0.4118 0.8824 1
putbox 8 18 47 60 7 8 0.2549 0.4118 0.8824 1
putbox 7 17 47 60 6 7 0.2549 0.4118 0.8824 1
putbox 6 16 47 60 5 6 0.2549 0.4118 0.8824 1
putbox 5 15 47 60 4 5 0.2549 0.4118 0.8824 1
putbox 4 14 47 60 3 4 0.2549 0.4118 0.8824 1
putbox 3 13 47 60 2 3 0.2549 0.4118 0.8824 1
putbox 2 12 47 60 1 2 0.2549 0.4118 0.8824 1
putbox 1 11 47 60 0 1 0.2549 0.4118 0.8824 1 
putbox 25 35 25 37 24 25 0.2549 0.4118 0.8824 1
putbox 26 36 25 37 23 24 0.2549 0.4118 0.8824 1
putbox 27 37 25 37 22 23 0.2549 0.4118 0.8824 1
putbox 28 38 25 37 21 22 0.2549 0.4118 0.8824 1
putbox 29 39 25 37 20 21 0.2549 0.4118 0.8824 1
putbox 30 40 25 37 19 20 0.2549 0.4118 0.8824 1
putbox 31 41 25 37 18 19 0.2549 0.4118 0.8824 1
putbox 32 42 25 37 17 18 0.2549 0.4118 0.8824 1
putbox 33 43 25 37 16 17 0.2549 0.4118 0.8824 1
putbox 34 44 25 37 15 16 0.2549 0.4118 0.8824 1
putbox 35 45 25 37 14 15 0.2549 0.4118 0.8824 1
putbox 36 46 25 37 13 14 0.2549 0.4118 0.8824 1
putbox 37 47 25 37 12 13 0.2549 0.4118 0.8824 1
putbox 38 48 25 37 11 12 0.2549 0.4118 0.8824 1
putbox 39 49 25 37 10 11 0.2549 0.4118 0.8824 1
putbox 40 50 25 37 9 10 0.2549 0.4118 0.8824 1
putbox 41 51 25 37 8 9 0.2549 0.4118 0.8824 1
putbox 42 52 25 37 7 8 0.2549 0.4118 0.8824 1
putbox 43 53 25 37 6 7 0.2549 0.4118 0.8824 1
putbox 44 54 25 37 5 6 0.2549 0.4118 0.8824 1
putbox 45 55 25 37 4 5 0.2549 0.4118 0.8824 1
putbox 46 56 25 37 3 4 0.2549 0.4118 0.8824 1
putbox 47 57 25 37 2 3 0.2549 0.4118 0.8824 1
putbox 48 58 25 37 1 2 0.2549 0.4118 0.8824 1
putbox 49 59 25 37 0 1 0.2549 0.4118 0.8824 1 
putbox 25 35 12 25 69 70 0.9569 0.6431 0.3765 1
putbox 24 34 12 25 68 69 0.9569 0.6431 0.3765 1
putbox 23 33 12 25 67 68 0.9569 0.6431 0.3765 1
putbox 22 32 12 25 66 67 0.9569 0.6431 0.3765 1
putbox 21 31 12 25 65 66 0.9569 0.6431 0.3765 1
putbox 20 30 12 25 64 65 0.9569 0.6431 0.3765 1
putbox 19 29 12 25 63 64 0.9569 0.6431 0.3765 1
putbox 18 28 12 25 62 63 0.9569 0.6431 0.3765 1
putbox 17 27 12 25 61 62 0.9569 0.6431 0.3765 1
putbox 16 26 12 25 60 61 0.9569 0.6431 0.3765 1 
putbox 15 25 12 25 59 60 0.9569 0.6431 0.3765 1
putbox 14 24 12 25 58 59 0.9569 0.6431 0.3765 1
putbox 13 23 12 25 57 58 0.9569 0.6431 0.3765 1
putbox 12 22 12 25 56 57 0.9569 0.6431 0.3765 1
putbox 11 21 12 25 55 56 0.9569 0.6431 0.3765 1
putbox 10 20 12 25 54 55 0.9569 0.6431 0.3765 1
putbox 9 19 12 25 53 54 0.9569 0.6431 0.3765 1
putbox 8 18 12 25 52 53 0.9569 0.6431 0.3765 1
putbox 7 17 12 25 51 52 0.9569 0.6431 0.3765 1
putbox 6 16 12 25 50 51 0.9569 0.6431 0.3765 1
putbox 5 15 12 25 49 50 0.9569 0.6431 0.3765 1
putbox 4 14 12 25 48 49 0.9569 0.6431 0.3765 1
putbox 3 13 12 25 47 48 0.9569 0.6431 0.3765 1
putbox 2 12 12 25 46 47 0.9569 0.6431 0.3765 1
putbox 1 11 12 25 45 46 0.9569 0.6431 0.3765 1
putbox 25 35 12 25 69 70 0.1176 0.5647 1.0 1
putbox 24 34 12 25 68 69 0.1176 0.5647 1.0 1
putbox 23 33 12 25 67 68 0.1176 0.5647 1.0 1
putbox 22 32 12 25 66 67 0.1176 0.5647 1.0 1
putbox 21 31 12 25 65 66 0.1176 0.5647 1.0 1
putbox 20 30 12 25 64 65 0.1176 0.5647 1.0 1
putbox 19 29 12 25 63 64 0.1176 0.5647 1.0 1
putbox 18 28 12 25 62 63 0.1176 0.5647 1.0 1
putbox 17 27 12 25 61 62 0.1176 0.5647 1.0 1
putbox 16 26 12 25 60 61 0.1176 0.5647 1.0 1 
putbox 25 35 60 72 69 70 0.9569 0.6431 0.3765 1
putbox 26 36 60 72 68 69 0.9569 0.6431 0.3765 1
putbox 27 37 60 72 67 68 0.9569 0.6431 0.3765 1
putbox 28 38 60 72 66 67 0.9569 0.6431 0.3765 1
putbox 29 39 60 72 65 66 0.9569 0.6431 0.3765 1
putbox 30 40 60 72 64 65 0.9569 0.6431 0.3765 1
putbox 31 41 60 72 63 64 0.9569 0.6431 0.3765 1
putbox 32 42 60 72 62 63 0.9569 0.6431 0.3765 1
putbox 33 43 60 72 61 62 0.9569 0.6431 0.3765 1
putbox 34 44 60 72 60 61 0.9569 0.6431 0.3765 1 
putbox 35 45 60 72 59 60 0.9569 0.6431 0.3765 1
putbox 36 46 60 72 58 59 0.9569 0.6431 0.3765 1
putbox 37 47 60 72 57 58 0.9569 0.6431 0.3765 1
putbox 38 48 60 72 56 57 0.9569 0.6431 0.3765 1 
putbox 39 49 60 72 55 56 0.9569 0.6431 0.3765 1
putbox 40 50 60 72 54 55 0.9569 0.6431 0.3765 1
putbox 41 51 60 72 53 54 0.9569 0.6431 0.3765 1
putbox 42 52 60 72 52 53 0.9569 0.6431 0.3765 1
putbox 43 53 60 72 51 52 0.9569 0.6431 0.3765 1
putbox 44 54 60 72 50 51 0.9569 0.6431 0.3765 1
putbox 45 55 60 72 49 50 0.9569 0.6431 0.3765 1
putbox 46 56 60 72 48 49 0.9569 0.6431 0.3765 1
putbox 47 57 60 72 47 48 0.9569 0.6431 0.3765 1
putbox 48 58 60 72 46 47 0.9569 0.6431 0.3765 1
putbox 49 59 60 72 45 46 0.9569 0.6431 0.3765 1
putbox 25 35 60 72 69 70 0.1176 0.5647 1.0 1
putbox 26 36 60 72 68 69 0.1176 0.5647 1.0 1
putbox 27 37 60 72 67 68 0.1176 0.5647 1.0 1
putbox 28 38 60 72 66 67 0.1176 0.5647 1.0 1
putbox 29 39 60 72 65 66 0.1176 0.5647 1.0 1
putbox 30 40 60 72 64 65 0.1176 0.5647 1.0 1
putbox 31 41 60 72 63 64 0.1176 0.5647 1.0 1
putbox 32 42 60 72 62 63 0.1176 0.5647 1.0 1
putbox 33 43 60 72 61 62 0.1176 0.5647 1.0 1
putbox 34 44 60 72 60 61 0.1176 0.5647 1.0 1
putbox 95 150 95 150 0 50 0.7216 0.5255 0.0431 1
cutbox 96 149 96 149 1 49 
putbox 147 150 147 150 0 50 0.0 0.0 0.0 1
putbox 147 150 95 97 0 50 0.0 0.0 0.0 1
putbox 147 150 95 150 0 3 0.0 0.0 0.0 1
putbox 147 150 95 150 47 50 0.0 0.0 0.0 1
putbox 95 97 95 150 47 50 0.0 0.0 0.0 1
putbox 95 97 95 150 0 3 0.0 0.0 0.0 1
putbox 95 150 95 97 47 50 0.0 0.0 0.0 1
putbox 95 150 147 150 47 50 0.0 0.0 0.0 1
putbox 95 97 147 150 0 50 0.0 0.0 0.0 1
putbox 95 97 95 97 0 50 0.0 0.0 0.0 1
putbox 95 150 95 97 0 3 0.0 0.0 0.0 1
putbox 95 150 147 150 0 3 0.0 0.0 0.0 1
putbox 95 150 95 97 35 40 0.0 0.0 0.0 1
putbox 95 97 95 150 35 40 0.0 0.0 0.0 1
putbox 95 150 95 97 35 40 0.0 0.0 0.0 1
putbox 95 97 95 97 35 40 0.0 0.0 0.0 1
putbox 117 127 90 95 32 45 1.0 1.0 1.0 1

```

Será gerada a mesma figura da versão 0.1, com a modificação da dimensionalidade.