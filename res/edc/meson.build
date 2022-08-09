edc_files = [
    'main.edc'
]

edje_cc_program = find_program('edje_cc', native: true)
edje_resources = []

foreach edc_file : edc_files
    edje_resources += custom_target(
        'edje_cc_' + edc_file,
        output : '@BASENAME@.edj',
        input:  edc_file,
        command: [edje_cc_program, '@INPUT@', '@OUTPUT@'])
endforeach