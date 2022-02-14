/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   owntest.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:47:04 by marcos            #+#    #+#             */
/*   Updated: 2022/02/13 15:32:42 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

int		main( void ) {
    Account* account1 = new Account(3);
    Account* account2 = new Account(3);
    Account::displayAccountsInfos();
    delete account1;
    
    delete account2;
    return (0);
}