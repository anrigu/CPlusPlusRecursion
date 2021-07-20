#include <iostream>
#include <string>

using namespace std;

void draw_line(int tick_length, string tick_label = "")
{
    string line(tick_length, '-');
    if (!tick_label.empty())
    {
        line += " " + tick_label;
    }
    cout << line + "\n";
}

void draw_interval(int center_length)
{
    if (center_length > 0)
    {
        draw_interval(center_length - 1);
        draw_line(center_length);
        draw_interval(center_length - 1);
    }
}

void draw_ruler(int num_inches, int major_length)
{
    draw_line(major_length, "0");
    for (int j = 1; j <= num_inches; j++)
    {
        draw_interval(major_length - 1);
        draw_line(major_length, to_string(j));
    }
}

int main() {
    draw_ruler(2,6);
    return 0;
}