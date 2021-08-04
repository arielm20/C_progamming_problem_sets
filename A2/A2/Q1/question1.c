#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>


float fkgrade(char str[]){
    int sentences=0, i;
    char last = ' ';
    for (i=0; str[i] != '\0'; i++){
        if(str[i] == '.' || str[i] == '?' || str[i] == '!'){
            sentences++;
            last = ' ';
        } else {
            last = str[i];
        }
    }
    int words=0;
    for (i=0;str[i] != '\0';i++){
        if(str[i]==' ' && str[i+1] != ' '){
            words++;
        }else if(str[i] == '-' && str[i+1] == '-'){
            words --;
        }
    }
    words = words + 1;
    int syllables=0;
    for (i=0;str[i] != '\0';i++){
        if((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') && (str[i+1] != 'a' || str[i+1] != 'e' || str[i+1] != 'i' || str[i+1] != 'o' || str[i+1] != 'u' || str[i+1] != 'A' || str[i+1] != 'E' || str[i+1] != 'I' || str[i+1] != 'O' || str[i+1] != 'U')){
            syllables++;
        }else if (str[i] == ' '){
            continue;
        }
    }
    float grade = (0.39*(words/sentences))+(11.8*(syllables/words))-15.59;
    return grade;
}

int main() {
    char plato[] = "He who is the real tyrant, whatever men may think, is the real slave, and is obliged to practise the greatest adulation and servility, and to be the flatterer of the vilest of mankind.  He has desires which he is utterly unable to satisfy, and has more wants than any one, and is truly poor, if you know how to inspect the whole soul of him: all his life long he is beset with fear and is full of convulsions and distractions, even as the State which he resembles: and surely the resemblance holds?";

    char aurelius[] = "Nothing pertains to human beings except what defines us as human.  No other things can be demanded of us.  They aren't proper to human nature, nor is it incomplete without them.  It follows that they are not our goal, or what helps us reach it -- the good.  If any of them were proper to us, it would be improper to disdain or resist it.  If the things themselves were good, it could hardly be good to give them up.  But in reality, the more we deny ourselves such things (and things like them) -- or are deprived of them involuntarily, even -- the better we become.";

    char descartes[] = "I suppose, accordingly, that all the things which I see are false (fictitious); I believe that none of those objects which my fallacious memory represents ever existed; I suppose that I possess no senses; I believe that body, figure, extension, motion, and place are merely fictions of my mind.  What is there, then, that can be esteemed true?  Perhaps this only, that there is absolutely nothing certain.";
    
    printf("Plato...\nexpected sentences = 2\n  expected words = 94\n  expected syllables = 135\n");
    float out = fkgrade(plato);
    printf("> Reading Level = %f\n", out);
    printf("Marcus Aurelius...\n  expected sentences = 7\n   expected words = 104\n    expected syllables = 151\n");
    out = fkgrade(aurelius);
    printf("> Reading Level = %f\n", out);
    printf("Rene Descartes...\n  expected sentences = 3\n   expected words = 67\n    expected syllables = 111\n");
    out = fkgrade(descartes);
    printf("> Reading Level = %f\n", out);
}
