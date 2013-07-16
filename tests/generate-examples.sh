#!/bin/bash

BASEDIR=`dirname $0`
BASEDIR=`cd $BASEDIR && pwd`

for i in `find $BASEDIR -name "*.ecore"`; do
    OUTPUT=`dirname $i`
    echo "Generating $i"
    java -jar $BASEDIR/../generator/es.senac.emf4cpp2.jar -o $OUTPUT $i
done

