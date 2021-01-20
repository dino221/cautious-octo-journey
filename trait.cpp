#include <iostream>
#include <string>

template <typname Traits>
class Information {
	private:
		Traits fp_name;
		Traits fp_family;
	public:
		void set_information(Traits arg_name, Traits arg_family) {
			fp_name = arg_name;
			fp_family = arg_family;
		}
		void get_information() {
			std::count << "Your name is " << fp_name << " " << fp_family << std::endl;
		}
	};
auto main(int argc, char* argv[]) -> decltype(0){
	Information<std::string> o_person;

	o_person.set_information("Milad", "Kahsari Alhadi");
	o_person.get_information();

	return 0;
}
