/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:24:41 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 11:28:16 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDON_FORM_HPP_
# define _PRESIDENTIALPARDON_FORM_HPP_

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        const std::string   target_;
    public:
        PresidentialPardonForm(std::string trgt);
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
        ~PresidentialPardonForm();

        void    executeAction() const;
};

#endif
