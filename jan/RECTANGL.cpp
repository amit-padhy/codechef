#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class make_vector {
public:
  typedef make_vector<T> my_type;
  my_type& operator<< (const T& val) {
    data_.push_back(val);
    return *this;
  }
  operator std::vector<T>() const {
    return data_;
  }
private:
  std::vector<T> data_;
};

int main()
{
	int T;
	cin>> T;
	int a, b, c, d;
	while(T--){
		cin >> a >> b >> c >> d ;

		// cout << a << b << c << d << endl;
		vector<int> nums = make_vector<int>() << a << b << c << d ;
		sort(nums.begin(), nums.end());
		if ((nums[0]== nums[1]) && 
			(nums[2]==nums[3])){
			cout<< "YES"<< endl;
		}else{
			cout<< "NO" << endl;
		}
	}
	return 0;

}