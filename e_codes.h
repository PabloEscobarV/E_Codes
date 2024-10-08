/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_codes.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pablo Escobar <sataniv.rider@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:11:03 by Pablo Escob       #+#    #+#             */
/*   Updated: 2024/09/30 20:36:39 by Pablo Escob      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef E_CODES_H
# define E_CODES_H

# define STR_MALLOC_ERROR	"MEMMORY ALLOCATE ERROR!!!"

enum	e_errorcodes
{
	E_ERR = -1,
	E_OK,
	E_KO,
	E_ERROR,
};

enum	e_state
{
	E_FALSE,
	E_TRUE,
};

#endif
