/* Generated by Edge Impulse
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#ifndef _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
#define _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_

#include "edge-impulse-sdk/anomaly/anomaly.h"

// (before - mean) / scale
const float ei_classifier_anom_scale[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 0.012128318911959673, 0.08385806764165263, 0.08446466736641921 };
const float ei_classifier_anom_mean[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 0.011685772814221933, 0.06271452414323277, 0.06248970884671954 };

const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[EI_CLASSIFIER_ANOM_CLUSTER_COUNT] = { { { -0.8650181293487549, -0.7356386184692383, -0.7217128872871399 }, 0.11916226735037931 }
, { { -0.45244160294532776, -0.41016072034835815, -0.47026506066322327 }, 0.14625633668043497 }
, { { 1.5621124505996704, 1.8157919645309448, 1.852690577507019 }, 0.20802359143992621 }
, { { -0.6221709847450256, -0.6750515699386597, -0.6479203701019287 }, 0.12513114331188152 }
, { { -0.5246114730834961, -0.6687393188476562, -0.6361619234085083 }, 0.17702735782731766 }
, { { -0.05094302445650101, -0.12091099470853806, -0.2099268138408661 }, 0.19411670991737281 }
, { { -0.23468470573425293, -0.11382970213890076, -0.1990305632352829 }, 0.20065753580239903 }
, { { -0.26665398478507996, -0.6296621561050415, -0.5699209570884705 }, 0.19188769877469583 }
, { { 1.8173418045043945, 1.7228009700775146, 1.7208094596862793 }, 0.17995522458058796 }
, { { 2.3241117000579834, 1.125972032546997, 0.7803654074668884 }, 0.27840657655805184 }
, { { -0.4089585840702057, -0.6453925371170044, -0.5950894355773926 }, 0.15344050404989157 }
, { { 1.7151848077774048, 1.7868304252624512, 1.8065420389175415 }, 0.1190859332909123 }
, { { -0.14120396971702576, -0.3847869634628296, -0.4093896746635437 }, 0.2356161707005623 }
, { { 0.20954713225364685, -0.2943013608455658, -0.45932167768478394 }, 0.2832724232162672 }
, { { 1.0929759740829468, 1.6714973449707031, 1.7690744400024414 }, 0.19926358822461546 }
, { { -0.6436847448348999, -0.41703763604164124, -0.43573421239852905 }, 0.19788243022087132 }
, { { 1.7353456020355225, 1.8611273765563965, 1.9060156345367432 }, 0.1842155164046213 }
, { { 2.277482748031616, 1.232329249382019, 0.9290716052055359 }, 0.1842081261911314 }
, { { -0.44912096858024597, -0.1803324818611145, -0.23805102705955505 }, 0.17246572444960848 }
, { { 1.6737408638000488, 1.7016305923461914, 1.7050062417984009 }, 0.11671910853130303 }
, { { -0.2925083339214325, -0.2465204894542694, -0.32149538397789 }, 0.1312350977514808 }
, { { 1.4929449558258057, 1.6757293939590454, 1.7085362672805786 }, 0.16238558429696862 }
, { { 1.8113317489624023, 1.6017892360687256, 1.5675839185714722 }, 0.16402207419348533 }
, { { 1.2599146366119385, 1.7000547647476196, 1.7753187417984009 }, 0.20076043027959323 }
, { { -0.511747419834137, -0.2918407618999481, -0.3572806715965271 }, 0.17617026339634087 }
, { { -0.2930484414100647, -0.3823447525501251, -0.4186817705631256 }, 0.15231717887575472 }
, { { -0.040035538375377655, -0.2759512960910797, -0.3382890224456787 }, 0.18112137780337983 }
, { { 1.8845207691192627, 1.4711663722991943, 1.3852734565734863 }, 0.26467034346489177 }
, { { 1.2786325216293335, 1.525129795074463, 1.5482983589172363 }, 0.17852349098277978 }
, { { 1.1136342287063599, 1.7891987562179565, 1.9214199781417847 }, 0.15351002227706312 }
, { { 0.14349059760570526, -0.028615958988666534, -0.2031181901693344 }, 0.28694132492655655 }
, { { 1.592471718788147, 1.5424875020980835, 1.5278503894805908 }, 0.20357661200346067 }
};

#endif // _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_