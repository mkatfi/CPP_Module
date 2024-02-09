/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:08:39 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/08 16:22:06 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <ctime>

// int main()
// {
//     MutantStack<std::string> test;
// 	test.push("If");
// 	test.push("You");
// 	test.push("Want");
// 	test.push("To be");
// 	test.push("Strong");
// 	test.push(",");
// 	test.push("Learn");
// 	test.push("To enjoy");
// 	test.push("Being");
// 	test.push("Alone");
//     std::cout << "A Wise Man Said : { ";
//     for (MutantStack<std::string>::iterator it = test.begin(); it != test.end(); ++it)
//     {
//         std::cout << *it << " ";
//     }
//     std::cout << "}"<<std::endl;
//     std::cout << std::endl;
//     return 0;
// }

int main()
{
    std::cout << "------------------ MY TESTS ------------------" << std::endl;
	MutantStack<int, std::vector<int> > stak;
    for (int i = 1; i <= 5; ++i)
        stak.push(i * 111);

    std::cout << "Stack elements ======>>>  : ";
    for (MutantStack<int, std::vector<int> >::iterator it = stak.begin(); it != stak.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "***********************************************" << std::endl;
    std::cout << "Rverse Stack elements >>> : ";
    for (MutantStack<int, std::vector<int> >::iterator iter = stak.end() - 1; iter != stak.begin() - 1; iter--)
        std::cout << *iter << " ";
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Top element befor pop     : " << stak.top() << std::endl;
    stak.pop();
    std::cout << "Top element after pop     : " << stak.top() << std::endl;
}

// int main()
// {
//     MutantStack<int>mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     mstack.push(0);

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }
