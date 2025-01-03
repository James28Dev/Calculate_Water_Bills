{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyPt7F7gzcOUYYUVAMiePCxG",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/James28Dev/Calculate_Water_Bills/blob/main/Exercise1.py\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "markdown",
      "source": [
        "**จงเขียนภาษาไพธอนเพื่อแก้โจทย์ต่อไปนี้**"
      ],
      "metadata": {
        "id": "I-y6dswIDNcs"
      }
    },
    {
      "cell_type": "markdown",
      "source": [
        "# โจทย์ที่ 1: หาค่าผลรวมของเลขที่หาร 3 ลงตัว ตั้งแต่ 1 - 30"
      ],
      "metadata": {
        "id": "XS0jEsMBDUbk"
      }
    },
    {
      "cell_type": "code",
      "execution_count": null,
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "SCmvylrtDE0z",
        "outputId": "792e82c8-83f0-4e0f-e3c9-0e6c49b70b9e"
      },
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "ผลรวมของเลขที่หาร 3 ลงตัว ตั้งแต่ 1 - 30 คือ 165\n"
          ]
        }
      ],
      "source": [
        "total = 0\n",
        "for num in range(1, 31):\n",
        "  if num % 3 == 0:\n",
        "    total += num\n",
        "print(\"ผลรวมของเลขที่หาร 3 ลงตัว ตั้งแต่ 1 - 30 คือ\", total)"
      ]
    },
    {
      "cell_type": "markdown",
      "source": [
        "# โจทย์ที่ 2: เขียนโปรแกรมเพื่อนับคำในประโยคที่กำหนด เช่น txt = \"this is a book\" นับได้ 4 คำ"
      ],
      "metadata": {
        "id": "JYyKy7X8Eay1"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "txt = \"this is a book\"\n",
        "space = 1\n",
        "for char in txt:\n",
        "  if char == ' ':\n",
        "    space += 1\n",
        "print(f\"จากประโยค {txt} นับได้ {space} คำ\")"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "NZo4pO-5Eb62",
        "outputId": "19e3c763-082c-4e30-e49e-6a9dbbe9884d"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "จากประโยค this is a book นับได้ 4 คำ\n"
          ]
        }
      ]
    },
    {
      "cell_type": "markdown",
      "source": [
        "# โจทย์ที่ 3: เขียนโปรแกรมเพื่อหาค่าต่ำสุดและสูงสุดใน list เช่น mylist = [10, 5, 8, 2, 15] ค่าต่ำสุดคือ 2 ค่าสูงสุดคือ 15"
      ],
      "metadata": {
        "id": "zvCFvbQyKZKD"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "mylist = [10, 5, 8, 2, 15]\n",
        "min_value = min(mylist)\n",
        "max_value = max(mylist)\n",
        "print(\"ค่าต่ำสุดและสูงสุดใน list\", mylist)\n",
        "print(\"ค่าต่ำสุด:\", min_value, \"\\tค่าสูงสุด:\", max_value)"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "S6x5QN0bKb1C",
        "outputId": "eb63bbc1-45e4-4522-a9c8-2c22ebbd354d"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "ค่าต่ำสุดและสูงสุดใน list [10, 5, 8, 2, 15]\n",
            "ค่าต่ำสุด: 2 \tค่าสูงสุด: 15\n"
          ]
        }
      ]
    }
  ]
}