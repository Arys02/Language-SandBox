(+ 1 1)
(defun ssq (n)

  (if (= n 1)
  1
  (+ (* n n) (ssq (i - n)))))


(defun hypo (a b)
  (sqrt (+ (* a a) (* b b))))

(setf (symbol-function 'backwards) #'reverse)

;; mapping
(mapcar #'sqrt '(1 2 3 4 5))

;; folding
(reduce #'+ '(1 2 3 4 5))
