# -*- coding: utf-8 -*-
"""
Created on Thu Feb 28 15:59:40 2019

@author: AD
"""

import tensorflow as tf
hello = tf.constant('Hello, TensorFlow!')
sess = tf.Session()
print(sess.run(hello))
