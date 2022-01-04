/*
  Copyright (C) 2020-2021 Free Software Foundation, Inc.

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef AST_H_DEFINED
#define AST_H_DEFINED
#include <cstddef> // nullptr_t
#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

struct Node
{
	Node()=default;
	Node(const string&str, Node node1=Node(), Node node2=Node(), Node node3=Node(),Node node4=Node(),
			Node node5=Node(),Node node6=Node(),Node node7=Node()){
		m_label=str;
		if (node1){
			m_ary.push_back(shared_ptr<Node>(new Node(node1)));
		}
		if (node2){
			m_ary.push_back(shared_ptr<Node>(new Node(node2)));
		}
		if (node3){
			m_ary.push_back(shared_ptr<Node>(new Node(node3)));
		}
		if (node4){
			m_ary.push_back(shared_ptr<Node>(new Node(node4)));
		}
		if (node5){
			m_ary.push_back(shared_ptr<Node>(new Node(node5)));
		}
		if (node6){
			m_ary.push_back(shared_ptr<Node>(new Node(node6)));
		}
		if (node7){
			m_ary.push_back(shared_ptr<Node>(new Node(node7)));
		}
	}
	Node(const Node&node)=default;
	Node(Node&&node)=default;
	Node& operator= (const Node& node) = default;
	Node& operator= (Node&& node) = default;
	vector<shared_ptr<Node>> m_ary;
	string m_label;
	explicit operator bool(){
		return !(m_ary.empty()&&m_label.empty());
	}
	ostream& print(ostream& out) const{
		if (!m_label.empty()){
			out<<m_label;
		}
		if (!m_ary.empty()){
			string start="{";
			for (auto item:m_ary){
				out<<start;
				start=",";
				item->print(out);
			}
			out<<"}";
		}
		return out;
	}
	friend ostream& operator<<(ostream& out, const Node& node){
		return node.print(out);
	}
};
#endif

