//
//  Node.cpp
//  BPlusTree.2a
//
//  Created by Amittai Aviram on 6/10/16.
//  Copyright © 2016 Amittai Aviram. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#include "Node.hpp"

Node::Node(int aOrder) : fOrder{aOrder}, fParent{nullptr} {}

Node::Node(int aOrder, Node* aParent) : fOrder{aOrder}, fParent{aParent} {}

Node::~Node() {}

int Node::order() const
{
    return fOrder;
}

Node* Node::parent() const
{
    return fParent;
}

void Node::setParent(Node* aParent)
{
    fParent = aParent;
}

bool Node::isRoot() const
{
    return !fParent;
}
