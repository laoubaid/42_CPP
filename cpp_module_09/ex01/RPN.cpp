/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 00:10:40 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/13 03:16:13 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int calculate(int nb1, int nb2, char opr) {
    if (opr == '*')
        return nb1 * nb2;
    if (opr == '+')
        return nb1 + nb2;
    if (opr == '-')
        return nb1 - nb2;
    if (opr == '/')
        return nb1 / nb2;
    return 0;
}

int costum_pop(std::stack<int> &stk) {
    int tmp = 0;

    if (stk.empty())
        throw std::runtime_error("Error!");
    tmp = stk.top();
    stk.pop();

    return tmp;
}

void stack_based_calculator(const std::string &rpn) {
    std::stack<int> stk;
    int             tmp1 = 0;
    int             tmp2 = 0;
    size_t          len = rpn.size();
    std::string     ops("+-*/");

    for (size_t i = 0; i < len; i++) {
        while (rpn[i] == ' ')
            i++;
        if (!rpn[i]) {
            break ;
        } else if (std::isdigit(rpn[i])) {
            stk.push((rpn[i] - 48));
        } else if (ops.find(rpn[i]) != std::string::npos) {
            tmp1 = costum_pop(stk);
            tmp2 = costum_pop(stk);

            stk.push(calculate(tmp2, tmp1, rpn[i]));
        } else {
            throw std::runtime_error("Error!");
        }
    }
    if (stk.size() != 1)
        throw std::runtime_error("Error!");

    std::cout << stk.top() << std::endl;
}