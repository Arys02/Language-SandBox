(+ 1 1)
(defun ssq (n)

  (if (= n 1)
  1
  (+ (* n n) (ssq (i - n)))))

(defun hypo (a b)
  (sqrt (+ (* a a) (* b b))))
