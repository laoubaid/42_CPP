/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:03:42 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/12 17:20:33 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <cstdlib>

std::map<std::string, float>    *get_database(std::string filename);
void                            bitcoin_exchange(std::map<std::string, float> *db, std::ifstream &input);

#endif
