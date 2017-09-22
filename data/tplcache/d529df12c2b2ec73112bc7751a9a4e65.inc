<li id="menu-item-1" class="menu-item menu-item-type-post_type menu-item-object-page menu-item-1"> <a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>
              <ul class="sub-menu">
                {dede:channel type='son' noself='yes'}
                <li id="menu-item-2" class="menu-item menu-item-type-taxonomy menu-item-object-category menu-item-2"><a href="[field:typeurl/]">[field:typename/]</a></li>
                {/dede:channel}
              </ul>
            </li>