#include <stdio.h>

typedef struct {
    char date[50];
    int height_temp;
    int Humidity;
} WEATHER;

WEATHER input_weather(void) {
    WEATHER country;
    printf("날짜 >> ");
    scanf("%s", country.date);
    printf("최고기온(섭씨)>> ");
    scanf("%d", &country.height_temp);
    printf("습도(%%)>> ");
    scanf("%d", &country.Humidity);
    return country;
}

void print_weather(WEATHER struction) {
    printf("\n");
    printf("날짜: %s\n", struction.date);
    printf("최고기온(섭씨): %d도\n", struction.height_temp);
    printf("습도: %d%%\n", struction.Humidity);
    printf("강수확률: %.2f\n",
           (float)(struction.Humidity - struction.height_temp) * 1 / 2);
}

int main() {
    WEATHER country = input_weather();

    print_weather(country);
};
