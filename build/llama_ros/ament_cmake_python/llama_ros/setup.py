from setuptools import find_packages
from setuptools import setup

setup(
    name='llama_ros',
    version='3.8.3',
    packages=find_packages(
        include=('llama_ros', 'llama_ros.*')),
)
