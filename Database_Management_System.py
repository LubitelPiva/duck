import json


def is_valid(f_name):
    with open(f_name, 'r') as inf:
        s = json.load(inf)
        if isinstance(s, dict):
            for i in s:
                if len(s[i]) != 3:
                    return False
            return True
        else:
            return False


def search_id(s):
    if len(s) == 0:
        return '0'
    if len(s) == 1:
        return '1'
    i_prev = '0'
    for i in s:
        if int(i) - int(i_prev) > 1:
            return str(int(i_prev) + 1)
        i_prev = i
    return str(int(i_prev) + 1)


class DBMS:

    def __init__(self, f_name):
        if is_valid(f_name):
            self.f_name = f_name
        else:
            raise Exception('Chto-to ne tak with format of file')

    def insert(self, name, second_name, birthday):
        with open(self.f_name, 'r') as inf:
            s = json.load(inf)
            id = search_id(s)
            s[id] = [name, second_name, birthday]
        with open(self.f_name, 'w') as outf:
            json.dump(s, outf)

    def del_elem(self, id):
        with open(self.f_name, 'r') as inf:
            s = json.load(inf)
            s.pop(id)
        with open(self.f_name, 'w') as outf:
            json.dump(s, outf)

    def remake_field(self, id, name=None, second_name=None, birthday=None):
        with open(self.f_name, 'r') as inf:
            s = json.load(inf)
            name = s[id][0] if name is None else name
            second_name = s[id][1] if second_name is None else second_name
            birthday = s[id][2] if birthday is None else birthday
            s[id] = [name, second_name, birthday]
        with open(self.f_name, 'w') as outf:
            json.dump(s, outf)

    def sort_by_fields(self, first=None,second=None,birth=None):
        pass

    def sort_by_keys(self):
        with open(self.f_name, 'r') as inf:
            s = json.load(inf)
            list_keys = list(s.keys())
            list_keys.sort()
            s_temp = {}
            for i in list_keys:
                s_temp[i] = s[i]
        with open(self.f_name, 'w') as outf:
            json.dump(s_temp, outf)

    def show(self, id=None):
        with open(self.f_name, 'r') as inf:
            s = json.load(inf)
            print('ID: NAME; SECOND_NAME; BIRTHDAY')
            if id is None:
                for id in s:
                    print('{0}: {1}; {2}; {3}'.format(id, s[id][0], s[id][1], s[id][2]))
            else:
                print('{0}: {1}; {2}; {3}'.format(id, s[id][0], s[id][1], s[id][2]))
