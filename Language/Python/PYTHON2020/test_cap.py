imporst unittest
import cap

class testcap(unittest.TestCase):
    def one_word_test(selfself):
        text='python'
        result=cap.cap_text(text)
        self.assertEqual(result, 'Python')

    def multi_word_test(self):
        text='monty python'
        result=cap.cap_text(text)
        self.assertEqual(result, 'Monty Python')

if __name__=='__main__':
    unittest.main()