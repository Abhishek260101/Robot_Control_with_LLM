from setuptools import find_packages
from setuptools import setup

setup(
    name='llama_msgs',
    version='3.8.3',
    packages=find_packages(
        include=('llama_msgs', 'llama_msgs.*')),
)
