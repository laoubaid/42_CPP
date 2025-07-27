/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:24:28 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 14:14:35 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUEST_FORM_HPP_
# define _ROBOTOMYREQUEST_FORM_HPP_

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>
#   include <sys/time.h>

class RobotomyRequestForm : public AForm
{
    private:
        const std::string   target_;
    public:
        RobotomyRequestForm(std::string trgt);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
        ~RobotomyRequestForm();

        void    executeAction() const;
};

#endif
