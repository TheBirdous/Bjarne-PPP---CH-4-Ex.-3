#include "../../std_lib_facilities.h"

int main()
{
	double distance = 0;
	double sum = 0;
	double mean = 0;

	vector<double> set_of_distances;

	cout << "Please enter a value (distance between two cities): ";

	while (cin >> distance)
	{
		distance = abs(distance);
		set_of_distances.push_back(distance);

		sum = sum + distance;
	}

	double smallest = set_of_distances[0];
	double largest = set_of_distances[0];

	for (int i = 0; i < set_of_distances.size(); i++)
	{
		if (set_of_distances[i] > largest)
		{
			largest = set_of_distances[i];
		}
		else if (set_of_distances[i] < smallest)
		{
			smallest = set_of_distances[i];
		}
		else
		{ }
	}

	mean = sum / set_of_distances.size();

	cout << "The sum of all entered distances is: " << sum << '\n';
	cout << "The smallest entered distance is: " << smallest << '\n';
	cout << "The largest entered distance is: " << largest << '\n';
	cout << "The mean distance is: " << mean << '\n';


	

	keep_window_open();
}