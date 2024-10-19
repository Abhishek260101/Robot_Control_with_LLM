from setuptools import find_packages
from setuptools import setup

setup(
    name='llama_demos',
    version='3.8.3',
    packages=find_packages(
        include=('llama_demos', 'llama_demos.*')),
)
