/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:42:37 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/09 13:59:49 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cal_wordlen(const char *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_cal_word(const char *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**ft_all_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	str = (char **)malloc(sizeof(char *) * (ft_cal_word(s, c) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			str[++i] = (char *)malloc(sizeof(char) * ft_cal_wordlen(s, c) + 1);
			if (!str[i])
				return (ft_all_free(str));
			j = 0;
			while (*s && *s != c)
				str[i][j++] = *s++;
			str[i][j] = '\0';
		}
	}
	str[++i] = NULL;
	return (str);
}
#include <stdio.h>
int main()
{
	char **a;
	a = ft_split("Lorem ipsum dolor, sit amet consectetur adipisicing elit. Autem, excepturi dolor possimus repellendus commodi ullam cumque eius! Nesciunt iste in odio aut est at nulla voluptate sequi reiciendis, quo Lorem ipsum dolor sit amet consectetur adipisicing elit. Culpa provident exercitationem doloremque ad, tenetur facilis omnis molestiae quo natus, maiores deserunt fugiat voluptatem. Voluptatem corrupti qui itaque! Aspernatur, temporibus impedit. Lorem ipsum dolor sit amet consectetur adipisicing elit. Ab, earum blanditiis quisquam cupiditate dolore debitis amet quasi. Alias, dolorum laudantium, earum maiores ad sunt nemo numquam accusantium officia facilis labore! Lorem ipsum dolor sit amet consectetur adipisicing elit. Facere harum, quasi provident officia ipsam nam iste voluptatum est, doloribus quisquam blanditiis eius ullam veritatis temporibus quae numquam aliquid debitis quidem. Lorem ipsum dolor sit amet consectetur adipisicing elit. Nemo numquam ullam sint odit autem, magnam recusandae dolorum pariatur quaerat ipsa libero praesentium rem perspiciatis veritatis. Incidunt, ratione eum. Repudiandae, officia? Lorem ipsum, dolor sit amet consectetur adipisicing elit. Amet dolore natus repudiandae provident illo molestiae magni fugit doloribus quas! Cupiditate reiciendis quas mollitia odio, vero labore soluta quaerat quisquam laudantium.a Lorem ipsum dolor sit amet consectetur adipisicing elit. Consectetur repellendus aliquid, id hic repellat odio esse earum eos perferendis aut temporibus, fugit accusamus, rerum ad incidunt laboriosam? Impedit, ex asperiores? Lorem ipsum dolor sit amet consectetur adipisicing elit. Atque dolorum excepturi ipsum, placeat animi eligendi blanditiis vero numquam ab non. Aperiam quia asperiores nihil saepe eum earum nobis, eaque hic. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Ducimus, laudantium in? At hic neque illum animi adipisci doloremque repellendus molestias cumque consectetur omnis sunt unde, id quae consequatur, saepe repudiandae? Lorem ipsum dolor sit amet consectetur adipisicing elit. Sequi quam tenetur praesentium voluptate repellat quibusdam veritatis, ipsa eaque. Impedit, recusandae dolore? Esse dicta at laboriosam ipsam culpa deleniti illo perspiciatis!Lorem ipsum dolor sit amet, consectetur adipisicing elit. Saepe praesentium, fugit laudantium incidunt, eligendi iste officia, corrupti tempore dolorem officiis est. Voluptatibus, minima! Earum aspernatur exercitationem id officiis, sunt amet. Lorem ipsum dolor sit amet consectetur adipisicing elit. Illum expedita aperiam optio suscipit cumque at corrupti aliquid perspiciatis adipisci quia. Deleniti error officia aspernatur voluptate voluptatum consectetur. In, alias quae? Lorem ipsum, dolor sit amet consectetur adipisicing elit. Sed saepe esse repellat, rerum dignissimos aliquam architecto minima libero consectetur molestiae earum temporibus eligendi illo, reprehenderit id fugiat, debitis illum nesciunt! Lorem ipsum, dolor sit amet consectetur adipisicing elit. Repellat delectus omnis, vitae suscipit, dicta et doloremque minima cum soluta ratione sequi? Veniam quis minima odit laborum non exercitationem itaque placeat! Lorem ipsum dolor, sit amet consectetur adipisicing elit. Optio, blanditiis. Porro sapiente ducimus repellendus? Non, quasi magni voluptatibus nemo temporibus iste quas, nulla, molestiae quidem aut eius laborum neque cumque. Lorem ipsum dolor sit amet consectetur adipisicing elit. Corporis velit quaerat maiores. Architecto iusto, ducimus quas consequatur, suscipit corrupti esse, necessitatibus aspernatur beatae itaque illo id. Unde aspernatur voluptas ex. Lorem ipsum dolor sit, amet consectetur adipisicing elit. Aliquid labore neque omnis distinctio maxime dolor recusandae eligendi, eveniet hic, ullam eius. Commodi asperiores recusandae corrupti nemo alias obcaecati nisi nam!Lorem ipsum dolor, sit amet consectetur adipisicing elit. Autem, excepturi dolor possimus repellendus commodi ullam cumque eius! Nesciunt iste in odio aut est at nulla voluptate sequi reiciendis, quo Lorem ipsum dolor sit amet consectetur adipisicing elit. Culpa provident exercitationem doloremque ad, tenetur facilis omnis molestiae quo natus, maiores deserunt fugiat voluptatem. Voluptatem corrupti qui itaque! Aspernatur, temporibus impedit. Lorem ipsum dolor sit amet consectetur adipisicing elit. Ab, earum blanditiis quisquam cupiditate dolore debitis amet quasi. Alias, dolorum laudantium, earum maiores ad sunt nemo numquam accusantium officia facilis labore! Lorem ipsum dolor sit amet consectetur adipisicing elit. Facere harum, quasi provident officia ipsam nam iste voluptatum est, doloribus quisquam blanditiis eius ullam veritatis temporibus quae numquam aliquid debitis quidem. Lorem ipsum dolor sit amet consectetur adipisicing elit. Nemo numquam ullam sint odit autem, magnam recusandae dolorum pariatur quaerat ipsa libero praesentium rem perspiciatis veritatis. Incidunt, ratione eum. Repudiandae, officia? Lorem ipsum, dolor sit amet consectetur adipisicing elit. Amet dolore natus repudiandae provident illo molestiae magni fugit doloribus quas! Cupiditate reiciendis quas mollitia odio, vero labore soluta quaerat quisquam laudantium.a Lorem ipsum dolor sit amet consectetur adipisicing elit. Consectetur repellendus aliquid, id hic repellat odio esse earum eos perferendis aut temporibus, fugit accusamus, rerum ad incidunt laboriosam? Impedit, ex asperiores? Lorem ipsum dolor sit amet consectetur adipisicing elit. Atque dolorum excepturi ipsum, placeat animi eligendi blanditiis vero numquam ab non. Aperiam quia asperiores nihil saepe eum earum nobis, eaque hic. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Ducimus, laudantium in? At hic neque illum animi adipisci doloremque repellendus molestias cumque consectetur omnis sunt unde, id quae consequatur, saepe repudiandae? Lorem ipsum dolor sit amet consectetur adipisicing elit. Sequi quam tenetur praesentium voluptate repellat quibusdam veritatis, ipsa eaque. Impedit, recusandae dolore? Esse dicta at laboriosam ipsam culpa deleniti illo perspiciatis!Lorem ipsum dolor sit amet, consectetur adipisicing elit. Saepe praesentium, fugit laudantium incidunt, eligendi iste officia, corrupti tempore dolorem officiis est. Voluptatibus, minima! Earum aspernatur exercitationem id officiis, sunt amet. Lorem ipsum dolor sit amet consectetur adipisicing elit. Illum expedita aperiam optio suscipit cumque at corrupti aliquid perspiciatis adipisci quia. Deleniti error officia aspernatur voluptate voluptatum consectetur. In, alias quae? Lorem ipsum, dolor sit amet consectetur adipisicing elit. Sed saepe esse repellat, rerum dignissimos aliquam architecto minima libero consectetur molestiae earum temporibus eligendi illo, reprehenderit id fugiat, debitis illum nesciunt! Lorem ipsum, dolor sit amet consectetur adipisicing elit. Repellat delectus omnis, vitae suscipit, dicta et doloremque minima cum soluta ratione sequi? Veniam quis minima odit laborum non exercitationem itaque placeat! Lorem ipsum dolor, sit amet consectetur adipisicing elit. Optio, blanditiis. Porro sapiente ducimus repellendus? Non, quasi magni voluptatibus nemo temporibus iste quas, nulla, molestiae quidem aut eius laborum neque cumque. Lorem ipsum dolor sit amet consectetur adipisicing elit. Corporis velit quaerat maiores. Architecto iusto, ducimus quas consequatur, suscipit corrupti esse, necessitatibus aspernatur beatae itaque illo id. Unde aspernatur voluptas ex. Lorem ipsum dolor sit, amet consectetur adipisicing elit. Aliquid labore neque omnis distinctio maxime dolor recusandae eligendi, eveniet hic, ullam eius. Commodi asperiores recusandae corrupti nemo alias obcaecati nisi nam!Lorem ipsum dolor, sit amet consectetur adipisicing elit. Autem, excepturi dolor possimus repellendus commodi ullam cumque eius! Nesciunt iste in odio aut est at nulla voluptate sequi reiciendis, quo Lorem ipsum dolor sit amet consectetur adipisicing elit. Culpa provident exercitationem doloremque ad, tenetur facilis omnis molestiae quo natus, maiores deserunt fugiat voluptatem. Voluptatem corrupti qui itaque! Aspernatur, temporibus impedit. Lorem ipsum dolor sit amet consectetur adipisicing elit. Ab, earum blanditiis quisquam cupiditate dolore debitis amet quasi. Alias, dolorum laudantium, earum maiores ad sunt nemo numquam accusantium officia facilis labore! Lorem ipsum dolor sit amet consectetur adipisicing elit. Facere harum, quasi provident officia ipsam nam iste voluptatum est, doloribus quisquam blanditiis eius ullam veritatis temporibus quae numquam aliquid debitis quidem. Lorem ipsum dolor sit amet consectetur adipisicing elit. Nemo numquam ullam sint odit autem, magnam recusandae dolorum pariatur quaerat ipsa libero praesentium rem perspiciatis veritatis. Incidunt, ratione eum. Repudiandae, officia? Lorem ipsum, dolor sit amet consectetur adipisicing elit. Amet dolore natus repudiandae provident illo molestiae magni fugit doloribus quas! Cupiditate reiciendis quas mollitia odio, vero labore soluta quaerat quisquam laudantium.a Lorem ipsum dolor sit amet consectetur adipisicing elit. Consectetur repellendus aliquid, id hic repellat odio esse earum eos perferendis aut temporibus, fugit accusamus, rerum ad incidunt laboriosam? Impedit, ex asperiores? Lorem ipsum dolor sit amet consectetur adipisicing elit. Atque dolorum excepturi ipsum, placeat animi eligendi blanditiis vero numquam ab non. Aperiam quia asperiores nihil saepe eum earum nobis, eaque hic. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Ducimus, laudantium in? At hic neque illum animi adipisci doloremque repellendus molestias cumque consectetur omnis sunt unde, id quae consequatur, saepe repudiandae? Lorem ipsum dolor sit amet consectetur adipisicing elit. Sequi quam tenetur praesentium voluptate repellat quibusdam veritatis, ipsa eaque. Impedit, recusandae dolore? Esse dicta at laboriosam ipsam culpa deleniti illo perspiciatis!Lorem ipsum dolor sit amet, consectetur adipisicing elit. Saepe praesentium, fugit laudantium incidunt, eligendi iste officia, corrupti tempore dolorem officiis est. Voluptatibus, minima! Earum aspernatur exercitationem id officiis, sunt amet. Lorem ipsum dolor sit amet consectetur adipisicing elit. Illum expedita aperiam optio suscipit cumque at corrupti aliquid perspiciatis adipisci quia. Deleniti error officia aspernatur voluptate voluptatum consectetur. In, alias quae? Lorem ipsum, dolor sit amet consectetur adipisicing elit. Sed saepe esse repellat, rerum dignissimos aliquam architecto minima libero consectetur molestiae earum temporibus eligendi illo, reprehenderit id fugiat, debitis illum nesciunt! Lorem ipsum, dolor sit amet consectetur adipisicing elit. Repellat delectus omnis, vitae suscipit, dicta et doloremque minima cum soluta ratione sequi? Veniam quis minima odit laborum non exercitationem itaque placeat! Lorem ipsum dolor, sit amet consectetur adipisicing elit. Optio, blanditiis. Porro sapiente ducimus repellendus? Non, quasi magni voluptatibus nemo temporibus iste quas, nulla, molestiae quidem aut eius laborum neque cumque. Lorem ipsum dolor sit amet consectetur adipisicing elit. Corporis velit quaerat maiores. Architecto iusto, ducimus quas consequatur, suscipit corrupti esse, necessitatibus aspernatur beatae itaque illo id. Unde aspernatur voluptas ex. Lorem ipsum dolor sit, amet consectetur adipisicing elit. Aliquid labore neque omnis distinctio maxime dolor recusandae eligendi, eveniet hic, ullam eius. Commodi asperiores recusandae corrupti nemo alias obcaecati nisi nam!Lorem ipsum dolor, sit amet consectetur adipisicing elit. Autem, excepturi dolor possimus repellendus commodi ullam cumque eius! Nesciunt iste in odio aut est at nulla voluptate sequi reiciendis, quo Lorem ipsum dolor sit amet consectetur adipisicing elit. Culpa provident exercitationem doloremque ad, tenetur facilis omnis molestiae quo natus, maiores deserunt fugiat voluptatem. Voluptatem corrupti qui itaque! Aspernatur, temporibus impedit. Lorem ipsum dolor sit amet consectetur adipisicing elit. Ab, earum blanditiis quisquam cupiditate dolore debitis amet quasi. Alias, dolorum laudantium, earum maiores ad sunt nemo numquam accusantium officia facilis labore! Lorem ipsum dolor sit amet consectetur adipisicing elit. Facere harum, quasi provident officia ipsam nam iste voluptatum est, doloribus quisquam blanditiis eius ullam veritatis temporibus quae numquam aliquid debitis quidem. Lorem ipsum dolor sit amet consectetur adipisicing elit. Nemo numquam ullam sint odit autem, magnam recusandae dolorum pariatur quaerat ipsa libero praesentium rem perspiciatis veritatis. Incidunt, ratione eum. Repudiandae, officia? Lorem ipsum, dolor sit amet consectetur adipisicing elit. Amet dolore natus repudiandae provident illo molestiae magni fugit doloribus quas! Cupiditate reiciendis quas mollitia odio, vero labore soluta quaerat quisquam laudantium.a Lorem ipsum dolor sit amet consectetur adipisicing elit. Consectetur repellendus aliquid, id hic repellat odio esse earum eos perferendis aut temporibus, fugit accusamus, rerum ad incidunt laboriosam? Impedit, ex asperiores? Lorem ipsum dolor sit amet consectetur adipisicing elit. Atque dolorum excepturi ipsum, placeat animi eligendi blanditiis vero numquam ab non. Aperiam quia asperiores nihil saepe eum earum nobis, eaque hic. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Ducimus, laudantium in? At hic neque illum animi adipisci doloremque repellendus molestias cumque consectetur omnis sunt unde, id quae consequatur, saepe repudiandae? Lorem ipsum dolor sit amet consectetur adipisicing elit. Sequi quam tenetur praesentium voluptate repellat quibusdam veritatis, ipsa eaque. Impedit, recusandae dolore? Esse dicta at laboriosam ipsam culpa deleniti illo perspiciatis!Lorem ipsum dolor sit amet, consectetur adipisicing elit. Saepe praesentium, fugit laudantium incidunt, eligendi iste officia, corrupti tempore dolorem officiis est. Voluptatibus, minima! Earum aspernatur exercitationem id officiis, sunt amet. Lorem ipsum dolor sit amet consectetur adipisicing elit. Illum expedita aperiam optio suscipit cumque at corrupti aliquid perspiciatis adipisci quia. Deleniti error officia aspernatur voluptate voluptatum consectetur. In, alias quae? Lorem ipsum, dolor sit amet consectetur adipisicing elit. Sed saepe esse repellat, rerum dignissimos aliquam architecto minima libero consectetur molestiae earum temporibus eligendi illo, reprehenderit id fugiat, debitis illum nesciunt! Lorem ipsum, dolor sit amet consectetur adipisicing elit. Repellat delectus omnis, vitae suscipit, dicta et doloremque minima cum soluta ratione sequi? Veniam quis minima odit laborum non exercitationem itaque placeat! Lorem ipsum dolor, sit amet consectetur adipisicing elit. Optio, blanditiis. Porro sapiente ducimus repellendus? Non, quasi magni voluptatibus nemo temporibus iste quas, nulla, molestiae quidem aut eius laborum neque cumque. Lorem ipsum dolor sit amet consectetur adipisicing elit. Corporis velit quaerat maiores. Architecto iusto, ducimus quas consequatur, suscipit corrupti esse, necessitatibus aspernatur beatae itaque illo id. Unde aspernatur voluptas ex. Lorem ipsum dolor sit, amet consectetur adipisicing elit. Aliquid labore neque omnis distinctio maxime dolor recusandae eligendi, eveniet hic, ullam eius. Commodi asperiores recusandae corrupti nemo alias obcaecati nisi nam!",' ');
	for (size_t i = 0;a[i]; i++)
	{
		printf("%s\n",a[i]);
	}
	
}