//
// Created by arshia on 1/10/24.
//

#pragma once

#include <vector>
#include <ranges>
#include <algorithm>

template<typename T>
class priority_queue {

	template<typename Tp>
	struct element_t {
        uint priority;
		Tp data;

		element_t(uint priority, Tp data): priority(priority), data(data){}

		bool operator < (element_t<Tp> const& other) const {
			return priority < other.priority;
		}
	};

	std::vector<element_t<T>> m_queue;
public:
	priority_queue(): m_queue() { std::ranges::make_heap(m_queue, std::less{}); }
	virtual ~priority_queue() = default;

	void insert(uint priority, T data) {
		m_queue.emplace_back(priority, data);
		std::ranges::push_heap(m_queue, std::less{});
	}

	T pop() {
		element_t<T> result = m_queue.front();
		std::ranges::pop_heap(m_queue, std::less{});
		return result.data;
	}

	[[nodiscard]] std::size_t size() const {
		return m_queue.size();
	}
};