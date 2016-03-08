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

(defun say-hello (who)
(format t "adding something")
(format t "Hello ~A!~%" who)

;; anomyme function
(lambda (x) (* 2 x) 3)

(defun adder (n)
  lambda (x) (+ x n)))

(defun sqrtp (s x)
  and (> s 0)
  = (* s s) x)

