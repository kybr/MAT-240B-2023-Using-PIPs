
# absolute minimum JUCE CMake configuration..

cmake_minimum_required(VERSION 3.15)
project(JUCE_PROJECT_NAME VERSION 0.0.1)
add_subdirectory(JUCE)
# now we have access to JUCE's cmake juce_add_pip function

juce_add_pip(FontsDemo.h)
juce_add_pip(AudioSynthesiserDemo.h)

# read on JUCE's CMake API
#
# https://github.com/juce-framework/JUCE/blob/master/docs/CMake%20API.md
